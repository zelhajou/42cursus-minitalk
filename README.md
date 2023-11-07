# minitalk

## Overview
Minitalk is a data exchange program that facilitates communication between a client and a server using UNIX signals. The main objective is to send a string from the client to the server using only the SIGUSR1 and SIGUSR2 signals.

## Features
- **Server-Client Communication:** The server prints its PID upon starting, and the client sends a string to the server using the server's PID.
- **UNIX Signal Communication:** Uses only SIGUSR1 and SIGUSR2 for data transmission.
- **Error Handling:** Robust error handling to prevent unexpected quits.
- **Memory Management:** Ensures no memory leaks and proper memory deallocation.

## Optional Features (Bonus)
- Server acknowledgment for every received message.
- Support for Unicode characters.
