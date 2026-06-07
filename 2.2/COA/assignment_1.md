1. Moore's Law states that the number of transistors on a microchip doubles approximately every 2 years. First, development of the Analytical and Difference engine by Charles Babbage which set a foundation for a machine that could solve a period within a finite time provided a input. Next the invention of vacuum tubes which was a massive improvement over the mechanical computers. Third and most importantly was the invention of transistors which saw speeds improve exponentially and computers became handheld devices. Next was the idea of qu-bits which leverage superposition and quantum properties of atoms to make quantum computers that are able to break modern cryptography using Shor's algorithm though the technology is relatively new. Finally, vector programming is becoming a new technique in risc V and arm to enable computers to process large data sets using inbuilt vector processing register and improving machine learning, complex graphics animation among other areas.
2. 
It offers concurrency by splitting a several programs to several threads which are run so fast that they appear to be running in parrallel.
It is less affected to race conditions compared to multi-core processors due to only a single core accessing a threads hence marginally better security.
It uses less power compared to multi-core systems
Most programs are written for single core systems i.e for c and python to have concurrency you must import and use the threading library.

3.
Control Unit - this is a component of a computer's central processing unit that directs the operation of the processor.
ALU - performs arithmetic and mathematical operations in the cpu 
Registers - provide small and very fast storage for instructions i.e addition, multiplication.
Cache - these are small but very fast storage that  reduce latency to data and instructions.

4.
A microprocessor is a more powerful computing unit that requires external components like memory and input/output devices to function, hence better general-purpose applications. while, a micro-controller has a limited processor, memory, and I/O peripherals on a single chip, making it ideal for specific control tasks i.e. embedded systems.

5.
For arm and risc-v instructions set cpus they have an integrated vector extension for vector programming which is much faster i.e 3x compared to the older instructions sets for variable vector operations and heavy vector operations.
For security mordern CPUs have the inbuilt TPM module for signing kernels so as to minimize risk of rootkits and improve disk encryption i.e all computers for running windows 11 require this tpm module.
Modern ISAs have variable form factors so as to allow one to increase or decrease the number of modules i.e. ram, graphics cards etc depending on the use case i.e embedded systems or powerful super computers.
Risc V and arm ISAs cpus are more efficient than traditional CISC instruction sets by removing components that are rarely used i.e floating point components hence they usually have a much longer lasting battery i.e M1 and M2 mac book chips.
Virtualization support: Hardware extensions i.e. Intel VT-x for intel chips and  AMD-V for amd chips to efficiently run virtual machines in virtually all major cpus since 2010.

6. 
Increase the clocking frequency i.e by overclocking or increasing the minimum clock speed in bios.
Uses gpu-accelerated programs i.e kitty terminal or mordern games which give the heavy graphics processing to the gpus and integrated gpus and leaving the cpu to do more tasks.
Writing programs that use concurrency and parallelism i.e python's threading module or go's inbuilt concurrency in order to divide programs to lightweight process(threads) that can be executed in parallel in order to achieve native cpu speeds.