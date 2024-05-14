class A:
    _value = 0
    def __init__(self, value) -> None:
        self._value = value
        
    def _display(self):
        print("This is display function. And the value is", self._value)


obj = A(6)
obj._display()

print(obj.__dict__)

