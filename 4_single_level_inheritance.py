class Car:
    def __init__(self, name) -> None:
        self.name = name

    def display(self):
        print(self.name, 'is a car')


class Toyota(Car):
    def __init__(self, name) -> None:
        super().__init__(name)


obj = Toyota("Toyota")

obj.display()