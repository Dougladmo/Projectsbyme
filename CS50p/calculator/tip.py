def main():
    dollars = dollars_to_float(input("How much was the meal? "))
    percent = percent_to_float(input("What percentage would you like to tip? "))
    tip = dollars * percent
    print(f"Leave ${tip:.2f}")


def dollars_to_float(d):
    # TODO
    dollfloat = d.strip('$')
    return float(dollfloat)


def percent_to_float(p):
    # TODO
    p = p.strip('%')
    p = float(p)
    return (p / 100)


main()