from calculator import square

def main():
    test_square()

def test_square():
    if square(2) != 4:
        print("math error")
    if square(3) != 9:
        print("math error")
        

if __name__== "__main__":
    main()