using BenchmarkTools

function sum_35_multiples(input=1000)
    sum = 0.0
    for i in 1:input-1
        if i % 3 == 0 || i % 5 == 0
            sum += i
        end 
    end
    return sum
end

println(sum_35_multiples())
@btime sum_35_multiples() # about thrice as fast as numba compiled function in python

