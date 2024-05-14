class A:
    def task1(self):
        print("This is class A")

class B:
    def task2(self):
        print("This is class B")

class C(A, B):
    def task3(self):
        print("This is class C")


c = C()
c.task1()
c.task2()
c.task3()



