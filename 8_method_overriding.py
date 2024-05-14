class Parent:
    def print(self):
        print("This is the function inside parent class")

class Child(Parent):
    # pass
    def print(self):
        print("This is the function inside child class")


obj = Child()
obj.print()