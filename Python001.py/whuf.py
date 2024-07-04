"""
def whoof(n: int) -> None:
    for _ in range(n):
        print("whooof")

number: int = int(input("Number: "))
whof: str = whoof(number)
"""
import argparse

parser= argparse.ArgumentParser(description="whoof like a dog")
parser.add_argument("-n",default=1, help="number of times to bark",type=int)
args = parser.parse_args()

for _ in range(args.n):
    print("whooof")