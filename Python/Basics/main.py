def main():
    import sys

    def parse_input(lines, idx=0, results=[]):
        if idx == 0:
            try:
                n = int(lines[0])
                return parse_input(lines[1:], 1, [])
            except:
                return []
        elif len(lines) < 2:
            return results
        else:
            try:
                x = int(lines[0])
                y_line = lines[1]
                y_parts = y_line.strip().split()
                if len(y_parts) != x:
                    return parse_input(lines[2:], idx + 2, results + [-1])
                total = sum(
                    map(
                        lambda y: int(y) ** 4 if int(y) <= 0 else 0,
                        y_parts
                    )
                )
                return parse_input(lines[2:], idx + 2, results + [total])
            except:
                return parse_input(lines[2:], idx + 2, results + [-1])

    input_data = sys.stdin.read().splitlines()
    output = parse_input(input_data)
    print("\n".join(map(str, output)))


if __name__ == "__main__":
    main()
