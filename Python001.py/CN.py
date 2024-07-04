class Wizard:
    def __init__(self, name):
        if not name:
            raise ValueError("Missing Name")
        self.name = name


class student(Wizard):
    def __init__(self, name, House):
        super().__init__(name)
        self.house = House

class proffesor(Wizard):
    def __init__(self, name, Subject):
        super().__init__(name)
        self.house = Subject