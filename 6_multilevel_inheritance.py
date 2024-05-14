class GrandParent:
    def property(self):
        print("I have 5 TK")

class Parent(GrandParent):
    def property(self):
        super().property()
        print("I have 3 TK")

class Child(Parent):
    def property(self):
        super().property()
        print("I have 2 TK")


obj = Child()
obj.property()