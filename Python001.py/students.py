class Student:
    def __init__(self, name, house):
        self.name = name
        self.house = house


def main():
    
    student = get_student()
    #name = get_name()
    #house = get_house()
    print(f"{student.name} from {student.house}")

    @property
    def house(self):
        return self._house
    
    @house.setter
    def house(self, house):
        if house not in ['Jamu', 'Mada', 'Shujaa']:
            raise ValueError('vakoo!!')
        self._house = house

def get_student():
    #student = Student()
    #student.name = input("Name: ")
    #student.house = input("House: ")
    name = input("Name: ")
    house = input("House: ")
    student = Student(name, house)
    return student

    #student["name"] = input("Name: ")
    #student["house"] = input("House: ")
    return student
#def get_name():
#    return input("Name: ")

#def get_house():
 #   return input("House: ")


if __name__== "__main__":
    main()
 