# 103Cipher 🔐

Welcome to **103cipher**.

This project involves creating a software for cryptographic purposes, using matrix-based ciphering methods.

## Language and Tools 🛠️

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

- **Language:** C
- **Compilation:** Via Makefile, including `re`, `clean`, and `fclean` rules.
- **Binary Name:** 103cipher

## Project Overview 🔎

The focus of this project is to develop a program that encrypts messages using a matrix-based method. The process involves:

- Transcribing the key and message using ASCII values.
- Converting these values into matrices.
- Applying matrix transformations for encryption and decryption.

### Usage

`./103cipher message key flag`

#### DESCRIPTION
- `message`: A message composed of ASCII characters.
- `key`: The encryption key, composed of ASCII characters.
- `flag`: 0 for encryption, 1 for decryption.

### Encryption Process

- Transcript the key into numbers using ASCII.
- Convert to the smallest square matrix, filling lines first.
- Transcript the message into numbers using ASCII.
- Multiply the key matrix by the message matrix for encryption.

### Decryption Process

- Inverse the key matrix (if possible).
- Multiply by the encrypted message.

## Examples

### Example 1

`Input: ./103cipher "Just because I don’t care doesn’t mean I don’t understand." "Homer S" 0`<br>

`Output:`<br>
`Encrypted message details...`<br>

### Example 2

`Input: ./103cipher "Encrypted message" "Homer S" 1`<br>

`Output:`<br>
`Decrypted message: Just because I don’t care doesn’t mean I don’t understand.`<br>


*Note: Ensure the precision of float numbers and matrix calculations.*

## Installation and Usage 💾

1. Clone the repository.
2. Compile the program using the provided Makefile.
3. Run the program: `./103cipher [message] [key] [flag]`.
4. For detailed guidelines, refer to `103cipher.pdf`.

## License ⚖️

This project is released under the MIT License. See `LICENSE` for more details.

