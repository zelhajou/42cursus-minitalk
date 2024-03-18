
![ascii-text-art (7)](https://github.com/zelhajou/minitalk/assets/39954629/a79a9feb-9542-49fb-b940-37bc703573c5)


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

## Allowed Functions
- [write](https://man7.org/linux/man-pages/man2/write.2.html)
- [ft_printf](https://github.com/zelhajou/ft_printf)
- [signal](https://man7.org/linux/man-pages/man2/signal.2.html)
- [sigemptyset](https://man7.org/linux/man-pages/man3/sigemptyset.3p.html)
- [sigaddset](https://man7.org/linux/man-pages/man3/sigaddset.3p.html)
- [sigaction](https://man7.org/linux/man-pages/man2/sigaction.2.html)
- [kill](https://man7.org/linux/man-pages/man2/kill.2.html)
- [getpid](https://man7.org/linux/man-pages/man2/getpid.2.html)
- [malloc](https://man7.org/linux/man-pages/man3/malloc.3.html)
- [free](https://man7.org/linux/man-pages/man1/free.1.html)
- [pause](https://man7.org/linux/man-pages/man2/pause.2.html)
- [sleep](https://man7.org/linux/man-pages/man3/sleep.3.html)
- [usleep](https://man7.org/linux/man-pages/man3/usleep.3.html)
- [exit](https://man7.org/linux/man-pages/man3/exit.3.html)

## Project Structure
- `src/` contains the source files for the client and server.
- `include/` contains the header files.
- `lib/` contains the libft library.
- `bin/` is where the compiled binaries will be stored.

## Resources

| Resource                                                                                                                                           | Source    |
| :------------------------------------------------------------------------------------------------------------------------------------------------- | :-------- |
| [Bitwise Operators in C/C++](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp)                                                             | `Website` |
| [How to use signal handlers in C language?](https://linuxhint.com/signal_handlers_c_programming_language)                                          | `Website` |
| [include/linux/signal.h - Linux source code (v6.6.2)](https://elixir.bootlin.com/linux/latest/source/include/linux/signal.h)                       | `Website` |
| [Beej's Guide to C Programming - 29 Signal Handling](https://beej.us/guide/bgc/html/split/signal-handling.html)                                    | `Website` |
| [Beej's Guide to C Programming - Bit-Fields](https://beej.us/guide/bgc/html/split/structs-ii-more-fun-with-structs.html#bit-fields)                | `Website` |
| [Beej's Guide to C Programming - What is Unicode?](https://beej.us/guide/bgc/html/split/unicode-wide-characters-and-all-that.html#what-is-unicode) | `Website` |
| [42-Bitwise_Operators](https://github.com/agavrel/42-Bitwise_Operators)                                                                            | `GitHub`  |

| Video Resource                                                                                             | Source    | User |
| :--------------------------------------------------------------------------------------------------------- | :-------- | :--- |
| [Sending and Handling Signals in C (kill, signal, sigaction)](https://www.youtube.com/watch?v=83M5-NPDeWs) | `Youtube` | `Jacob Sorber` |
| [Short Introduction to Signals in C](https://youtu.be/5We_HtLlAbs)                                         | `Youtube` | `CodeVault` |
| [Handling Signals](https://www.youtube.com/watch?v=jF-1eFhyz1U)                                            | `Youtube` | `CodeVault` |

### Read:
- [My blog](https://zelhajou.medium.com/building-the-42-school-minitalk-project-a-guide-to-unix-signal-based-communication-in-c-d11605643747)

### General

#### Character Encodings
Character encodings are a way of representing characters as numbers. They are used to store and transmit text. The most common character encoding is ASCII, which is a 7-bit encoding. This means that each character is represented by a number between 0 and 127. The ASCII character set contains 128 characters, including letters, numbers, punctuation, and control characters. The ASCII character set is a subset of the Unicode character set, which is a 16-bit encoding. Unicode is a superset of ASCII, so ASCII characters can be represented by Unicode. Unicode is the most common character encoding used on the web.
- [Must Know about Character Encodings](https://www.joelonsoftware.com/2003/10/08/the-absolute-minimum-every-software-developer-absolutely-positively-must-know-about-unicode-and-character-sets-no-excuses/)
- [Character Encoding](https://cs.lmu.edu/~ray/notes/charenc/)

#### Unicode
Unicode is a standard for encoding characters. It is a superset of ASCII, which means that ASCII is a subset of Unicode. Unicode is a 16-bit encoding, which means that it can encode 2^16 = 65536 characters. This is a lot more than ASCII, which can only encode 128-character
- [How Unicode Works: What Every Developer Needs to Know About Strings and 🦄](https://deliciousbrains.com/how-unicode-works/)
- [Characters, Symbols, and the Unicode Miracle - Computerphile](https://www.youtube.com/watch?v=MijmeoH9LT4)

#### ASCII
ASCII is a character encoding standard for electronic communication. It was developed from telegraph code and uses 7 bits to represent 128 different characters. The first 32 characters are non-printable control characters used to control devices like printers and typewriters. The remaining 96 characters are printable and include the letters of the English alphabet, numbers, punctuation, and various symbols.
  - [Must Know about Character Encodings
](https://www.joelonsoftware.com/2003/10/08/the-absolute-minimum-every-software-developer-absolutely-positively-must-know-about-unicode-and-character-sets-no-excuses/)

#### Signals
<details>
  <summary>
Q: How are signals used in C?
  </summary>
A: Signals are used for various purposes in C programming, such as handling unexpected events, communication between processes, and managing the execution flow. They provide a way for a process to respond to events asynchronously.
</details>

<details>
  <summary>
    Q: How are signals generated in C?
  </summary>
A: Signals can be generated by different sources, including hardware events, the kernel, or other processes. For example, the <code>kill</code> command in Unix/Linux can send signals to processes. Hardware events like divide-by-zero or segmentation faults also generate signals.
</details>

<details>
  <summary>
    Q: How does a process handle signals in C?
  </summary>
  A: A process can handle signals by defining signal handlers. A signal handler is a function that gets executed when a specific signal is received.<br>
In C, a process can handle signals by using either the <code>signal</code> function or the more versatile <code>sigaction</code> function.

1. **Using signal:**
The signal function is a simple way to establish a signal handler. It takes the signal number and a pointer to the function that will handle the signal.

```c
#include <signal.h>

void signal_handler(int signum) {
    // Code to handle the signal
}

int main() {
    // Registering a signal handler for SIGINT (Ctrl+C)
    signal(SIGINT, signal_handler);

    // Rest of the program

    return 0;
}

```
Note: The signal function is portable but has limitations, such as automatically resetting the handler to the default for some signals.

2. **Using sigaction:**
The <code>sigaction</code> function provides more control over signal handling. It allows specifying additional flags and provides a structure (<code>struct sigaction</code>) to define the handler

You need to define a signal handler function and a struct sigaction variable. Then, set the handler in the sa_handler field and use sigaction to register the handler.

```c
#include <signal.h>

void sigaction_handler(int signum) {
    // Code to handle the signal
}

int main() {
    struct sigaction sa;
    sa.sa_handler = sigaction_handler;
    sa.sa_flags = 0;

    // Registering a signal handler for SIGINT using sigaction
    sigaction(SIGINT, &sa, NULL);

    // Rest of the program

    return 0;
}
```
The <code>sigaction</code> function is more flexible and recommended for advanced signal handling.
<br>
<code>signal</code> and <code>sigaction</code> can be used for handling signals in C, but <code>sigaction</code> is preferred for its additional features and greater flexibility, especially in handling edge cases and avoiding race conditions.
</details>

<details>
  <summary>
Q: What is <code>sigaction</code> in C?
  </summary>
A: <code>sigaction</code> is a function in C that provides a more flexible and detailed way to handle <code>signals</code> compared to the <code>signal</code>code> function. It allows for fine-grained control over signal handling and provides additional information through the use of a structure called <code>struct sigaction</code>.
</details>

<details>
  <summary>
Q: How is <code>sigaction</code> different from <code>signal</code> in C?
  </summary>
A: While both sigaction and signal are used for signal handling, sigaction offers more control and information. signal is a simpler interface that allows you to set a function as a signal handler, whereas sigaction allows you to specify additional flags, handle multiple signals with a single handler, and obtain detailed information about the signal and its handling.
</details>

<details>
  <summary>
Q: What information does <code>struct sigaction</code>e provide?
  </summary>
A: <code>struct sigaction</code> includes several fields, but the <code>sa_handler</code> field is the most commonly used. It represents the signal handler function. Additionally, there's the <code>sa_flags</code> field that allows you to set various flags for handling signals, and the <code>sa_mask</code> field that specifies a set of signals to be blocked while the signal handler is executing.
</details>

<details>
  <summary>
Q: Can a process ignore a signal in C?
  </summary>
A: Yes, a process can ignore a signal by setting the signal handler to SIG_IGN using the signal function. For example:
  
```c
  #include <signal.h>

int main() {
    // Ignoring the SIGTERM signal
    signal(SIGTERM, SIG_IGN);

    // Rest of the program

    return 0;
}
```
</details>

<details>
  <summary>
    Q: How can a process restore the default handling of a signal in C?
  </summary>
A: The signal function can be used to restore the default handling of a signal by setting the signal handler to SIG_DFL. For example:

```c
#include <signal.h>

int main() {
    // Restoring default handling for SIGTERM
    signal(SIGTERM, SIG_DFL);

    // Rest of the program

    return 0;
}
```
</details>

<details>
  <summary>
  Q: What are some common signals in C?
  </summary>
A: Some common signals include <code>SIGINT</code> (interrupt from the keyboard, often generated by Ctrl+C), <code>SIGSEGV</code> (segmentation fault), <code>SIGTERM</code> (termination request), and <code>SIGKILL</code> (forceful termination). There are many others, and their meanings can vary between operating systems.
</details>

<details>
  <summary>
Q: How can a process send a signal to another process in C?
  </summary>
A: The <code>kill</code> function in Unix/Linux can be used to send a signal to another process. For example:

```c
#include <signal.h>

int main() {
    // Sending SIGTERM signal to process with PID 1234
    kill(1234, SIGTERM);

    // Rest of the program

    return 0;
}
```
</details>


