def total(galleons, sickel, knuts):
    return (galleons*11 + sickel)* 29 +knuts
coins = [100, 50, 30]
print(total(*coins),"knuts")