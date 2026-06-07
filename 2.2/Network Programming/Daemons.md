These are linux processes that run in the background without user intervention
Key characteristics
1. No terminal interface(detached from tty)
2. Often start at boot and run continuously
3. Daemons close their standard input, output, and error file descriptors (stdin, stdout, stderr) and often redirect any output to log files. 