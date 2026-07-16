
import os
import sys

try:
    import pdfplumber
except ImportError:
    print("Installing pdfplumber...")
    import subprocess
    subprocess.check_call([sys.executable, "-m", "pip", "install", "pdfplumber"])
    import pdfplumber

docs_dir = os.path.join(os.path.dirname(__file__), "docs")

for filename in os.listdir(docs_dir):
    if filename.endswith(".pdf"):
        pdf_path = os.path.join(docs_dir, filename)
        print(f"\n=== Extracting text from {filename} ===")
        
        try:
            with pdfplumber.open(pdf_path) as pdf:
                full_text = ""
                for page in pdf.pages:
                    text = page.extract_text()
                    if text:
                        full_text += text + "\n"
                
                # Save to a .txt file
                output_path = os.path.join(docs_dir, filename.replace(".pdf", ".txt"))
                with open(output_path, "w", encoding="utf-8") as f:
                    f.write(full_text)
                
                print(f"Successfully saved to {output_path}")
                print(f"First 2000 chars:\n{full_text[:2000]}")
        
        except Exception as e:
            print(f"Error extracting text from {filename}: {e}")
