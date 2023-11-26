![42_minitalk_banner_new](https://github.com/zelhajou/minitalk/assets/39954629/1c34bd11-ae33-43af-a67e-052fd8110d3a)

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

## Project Structure
- `src/` contains the source files for the client and server.
- `include/` contains the header files.
- `lib/` contains the libft library.
- `bin/` is where the compiled binaries will be stored.

## Resources

### Read:
- [My blog](https://zelhajou.medium.com/building-the-42-school-minitalk-project-a-guide-to-unix-signal-based-communication-in-c-d11605643747)


### General
<details>
  <summary>
- 
  </summary>
</details>
