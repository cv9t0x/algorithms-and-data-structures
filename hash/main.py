def hash(str, size=8):
    res = 0

    for char in str:
        charCode = ord(char)
        res ^= charCode

    return bin(res)[2:].zfill(size)


def main():
    print(hash('asdqwerty'))


if __name__ == '__main__':
    main()
