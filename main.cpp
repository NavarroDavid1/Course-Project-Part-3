#include <iostream>
#include <string>
#include <cctype> // For toupper function

// Function to generate the key by repeating the keyword
std::string generateKey(const std::string& text, const std::string& keyword) {
    std::string key = keyword;
    while (key.length() < text.length()) {
        key += keyword;
    }
    return key.substr(0, text.length());
}

// Function to convert character to index (A=0, B=1, ..., Z=25)
int charToIndex(char c) {
    return c - 'A';
}

// Function to convert index to character (0=A, 1=B, ..., 25=Z)
char indexToChar(int index) {
    return 'A' + index;
}

// Function to encrypt the plaintext using the Vigenere Cipher
std::string encrypt(const std::string& plaintext, const std::string& keyword) {
    std::string key = generateKey(plaintext, keyword);
    std::string ciphertext;

    for (size_t i = 0; i < plaintext.length(); ++i) {
        int p = charToIndex(toupper(plaintext[i]));
        int k = charToIndex(toupper(key[i]));
        int e = (p + k) % 26;
        ciphertext += indexToChar(e);
    }

    return ciphertext;
}

// Function to decrypt the ciphertext using the Vigenere Cipher
std::string decrypt(const std::string& ciphertext, const std::string& keyword) {
    std::string key = generateKey(ciphertext, keyword);
    std::string plaintext;

    for (size_t i = 0; i < ciphertext.length(); ++i) {
        int e = charToIndex(toupper(ciphertext[i]));
        int k = charToIndex(toupper(key[i]));
        int p = (e - k + 26) % 26;
        plaintext += indexToChar(p);
    }

    return plaintext;
}

int main() {
    int choice;
    std::string text, keyword;

    std::cout << "Welcome to the Vigenere Cipher Program\n";

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Encrypt a message\n";
        std::cout << "2. Decrypt a message\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear the newline character from the input buffer

        switch (choice) {
            case 1:
                std::cout << "Enter the plaintext (uppercase letters only): ";
                std::getline(std::cin, text);
                std::cout << "Enter the keyword: ";
                std::getline(std::cin, keyword);
                std::cout << "Encrypted Message: " << encrypt(text, keyword) << "\n";
                break;

            case 2:
                std::cout << "Enter the ciphertext (uppercase letters only): ";
                std::getline(std::cin, text);
                std::cout << "Enter the keyword: ";
                std::getline(std::cin, keyword);
                std::cout << "Decrypted Message: " << decrypt(text, keyword) << "\n";
                break;

            case 3:
                std::cout << "Exiting program. Goodbye!\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
git clone https://github.com/NavarroDavid1/Course-Project-Part-3-Self-and-Team-Evaluation-GitHub.git