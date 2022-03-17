
# middlesquare-rng

**An implementation of middle-square random number generation, written in C.**

This implementation serves as a basic and lightweight demonstration of simple pseudo-random number generation.

*There are some known issues:*

1. There is no check for a return of a value of `0`, hence breaking any iteration after using the same seed.

2. Compared to other "Demonstration" pseudo-random number generators, this has a very low period, or how small the chance of a seed to repeat back it itself is.
