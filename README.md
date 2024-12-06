# Vigenere Cipher Encryption and Decryption Program

## Project Description
This program implements the Vigenere Cipher, a polyalphabetic substitution cipher used for encrypting and decrypting text. It allows users to:

1. Encrypt a plaintext message using a keyword.
2. Decrypt a ciphertext message back into plaintext using the same keyword.

The program is designed to provide an interactive menu for the user to perform these tasks and demonstrates the practical application of modular arithmetic, string manipulation, and discrete structures in C++ programming.

---

## Programming Approaches
### Key Features:
- **Key Generation**: The keyword is repeated cyclically to match the length of the text.
- **Encryption**: Each character of the plaintext is shifted based on the corresponding character in the keyword using modular arithmetic.
- **Decryption**: Each character of the ciphertext is shifted backward using the same method.
- **User-Friendly Menu**: The program uses a menu-driven approach for easy interaction.

### Algorithm Highlights:
- **Modular Arithmetic**: Ensures the alphabet wraps around after 'Z'.
- **String Manipulation**: Converts characters to numeric indices and vice versa for calculations.
- **Input Validation**: Handles uppercase input to maintain consistent functionality.

---

## Authors
- **David Navarro** (Solo developer)

---

## Date Published
December 6, 2024

---

## Instructions for Use
1. Compile the program using a C++ compiler (e.g., g++, clang++):
   ```bash
   g++ -o vigenere_cipher vigenere_cipher.cpp
   ```

2. Run the program:
   ```bash
   ./vigenere_cipher
   ```

3. Follow the interactive menu:
   - Option **1**: Enter a plaintext message and a keyword to encrypt the message.
   - Option **2**: Enter a ciphertext message and a keyword to decrypt the message.
   - Option **3**: Exit the program.

### Example Usage:
- **Encryption**:
  - Input:
    - Plaintext: `HELLO`
    - Keyword: `KEY`
  - Output:
    - Ciphertext: `RIJVS`

- **Decryption**:
  - Input:
    - Ciphertext: `RIJVS`
    - Keyword: `KEY`
  - Output:
    - Plaintext: `HELLO`

---

## Notes
- Ensure that the input text consists only of uppercase English alphabet letters (A–Z).
- The program does not handle special characters, spaces, or numbers.
- To improve functionality, consider extending the program to handle lowercase letters and special characters in the future.

---

## License
This project is created for educational purposes as part of the CIS7 course project. Redistribution or modification is permitted under the instructor's guidelines.
