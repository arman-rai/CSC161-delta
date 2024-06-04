#include <stdint.h>

#define n 624
#define m 397

typedef struct
{
    uint32_t state_array[n];        // the array for the state vector 
    int state_index;                // index into state vector array
} mt_state;

uint32_t random_uint32(mt_state* state)
{
    uint32_t* state_array = &(state->state_array[0]);
    int k = state->state_index;      // 0 <= state_index <= n-1   always

    uint32_t y = state_array[k];     // get state from n iterations before

    int j = k - (n-1);               // point to state n-1 iterations before
    if (j < 0) j += n;               // modulo n circular indexing

    uint32_t x = (y & 0x80000000UL) | (state_array[j] & 0x7fffffffUL);

    uint32_t z = x >> 1;
    if (x & 0x00000001UL) z ^= 0x9908b0dfUL;

    j = k - (n-m);                   // point to state n-m iterations before
    if (j < 0) j += n;               // modulo n circular indexing

    state_array[k++] = state_array[j] ^ z;     // update new state

    if (k >= n) k = 0;               // modulo n circular indexing
    state->state_index = k;

    y ^= (y >> 11);                  // tempering 
    y ^= (y << 7) & 0x9d2c5680UL;
    y ^= (y << 15) & 0xefc60000UL;
    y ^= (y >> 18);

    return y; 
}

void seed_initial_state(mt_state* state, uint32_t seed) 
{
    uint32_t* state_array = &(state->state_array[0]);

    for (int k=0; k<n; k++)
    {
        seed = 1812433253UL * (seed ^ (seed >> 30)) + k;    // Knuth TAOCP Vol2. 3rd Ed. P.106 for multiplier.
        state_array[k] = seed;                              // suggested initial seed = 19650218UL 
    }

    state->state_index = 0;
}