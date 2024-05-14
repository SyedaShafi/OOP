class Calculator:
    def add(self, *args):
        sum = 0 
        for e in args:
            sum += e
        print(f"sum of {len(args)} numbers is {sum}")


obj = Calculator()
obj.add(1, 2,3)
obj.add(1, 3)