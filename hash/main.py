def hash(str, size=8):
    res = 0

    for char in str:
        charCode = ord(char)
        res ^= charCode

    return bin(res)[2:].zfill(size)


def main():
    print(hash('asdqwerty'))
    # print(0 % 2, 1 % 2, 2 % 2, 3 % 2)
    # hash('abcdefgafdifpdsvkbv/zvcczcxvzxc.v')


if __name__ == '__main__':
    main()
