class A:
    value = 0

    def __init__(self, value) -> None:
        self.value = value
        print("This is constructor")

    def __del__(self) -> None:
        print("This is destructor")


obj = A(14)
print(obj.value)
