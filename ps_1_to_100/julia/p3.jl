# Question
# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?
using BenchmarkTools


function primeFactors!(primes::Array, input::BigInt)
    while input % 2 == 0
        input /= 2;
    end
    
    for i = 3:2:sqrt(input)
        @inbounds while input % i == 0
            push!(primes, i)
            input ÷= i;
        end
    # push!(primefactors, i);
    end

    if input > 2
        println(input)
        push!(primes, input)    
    end
    return primes
end


function main(input::BigInt)
    primes = []
    primeFactors!(primes, input) |> maximum
    # vals = primeFactors(input)
    # println(vals)
    # return prod(vals)
end

vals = BigInt(600851475143)
@btime main(vals)

# the naive algorithm would be to loop from 2 to input / 2 -1 (inclusive) and accumulate the prime factor. However,
# this algorithm is roughly O(n). Can we do better?