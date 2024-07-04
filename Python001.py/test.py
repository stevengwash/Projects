from hello import hello

def test_hello():
    assert hello("Stee")== "hello, Stee"
    assert hello()== "hello, world"