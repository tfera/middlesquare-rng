#define POWER 2 // implying squaring

unsigned long pow(unsigned long base, unsigned int power)
{
    // result starts at 1, since during the first iteration, and therefore
    // the first exponent, we would want to receive the base anyways (x^1=x)
    unsigned long result = 1;

    // iterate through the base <power> many times
    int iterPower;
    for(iterPower = 0; iterPower < power; iterPower++)
    {
        result = result * base; // multiply by the base for <iterPower> many iters
    }

    return result;
}

unsigned long  getSecondToSixthDigs(unsigned long preserved)
{
    preserved = preserved % 1000000; // strip all digits until the last 6.
    preserved = preserved / 10; // remove last digit

    return preserved;
}

unsigned long  midSquareRNG(unsigned long seed)
{
    seed = pow(seed, (unsigned int)POWER); // square seed
    seed = getSecondToSixthDigs(seed); // strip the least sig. digit and anything past the 6th digit

    return(seed);
}
