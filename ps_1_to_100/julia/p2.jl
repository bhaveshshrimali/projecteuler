using BenchmarkTools

function fib(n)
    if n==1
        return 1
    elseif n==2
        return 2
    else
        return fib(n-1) + fib(n-2)
    end
end


function main(input=4000000)
    sum_fib = 0
    let n = 2
        fib_n = fib(n)
        while fib_n < input
            if fib_n % 2 == 0
                sum_fib += fib_n
            end
            n += 1
            fib_n = fib(n)
        end
    end
    return sum_fib
end

@btime main()