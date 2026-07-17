#!/bin/bash

PROGRAM="./ex04"

echo "=== Building test files ==="

cat > test.txt << EOF
hello world
hello hello hello

HELLO Hello hello

apple banana apple grape apple

aaaaaa
aaaaa
aaaa
aaa

abcabcabc
abc abc abc

12345 12345 123

the quick brown fox jumps over the lazy dog

special chars: !@#$%^&*()_+

end
EOF

cat > empty.txt << EOF
EOF

cat > start.txt << EOF
hello world
EOF

cat > end.txt << EOF
world hello
EOF

cat > whole.txt << EOF
hello
EOF

cat > repeat.txt << EOF
aaaaaaaa
EOF


echo ""
echo "=== Test 1: Normal replacement ==="
$PROGRAM test.txt hello hi
cat test.txt.replace


echo ""
echo "=== Test 2: Multiple occurrences ==="
$PROGRAM test.txt apple orange
cat test.txt.replace


echo ""
echo "=== Test 3: Case sensitivity ==="
$PROGRAM test.txt hello X
cat test.txt.replace


echo ""
echo "=== Test 4: String not found ==="
$PROGRAM test.txt xyz abc
cat test.txt.replace


echo ""
echo "=== Test 5: Replacement at start ==="
$PROGRAM start.txt hello bye
cat start.txt.replace


echo ""
echo "=== Test 6: Replacement at end ==="
$PROGRAM end.txt hello bye
cat end.txt.replace


echo ""
echo "=== Test 7: Whole file replacement ==="
$PROGRAM whole.txt hello goodbye
cat whole.txt.replace


echo ""
echo "=== Test 8: Consecutive matches ==="
$PROGRAM repeat.txt aa X
cat repeat.txt.replace


echo ""
echo "=== Test 9: Search string longer than file ==="
$PROGRAM whole.txt verylongstring x
cat whole.txt.replace


echo ""
echo "=== Test 10: Same s1 and s2 ==="
$PROGRAM test.txt hello hello
cat test.txt.replace


echo ""
echo "=== Test 11: Empty search string ==="
$PROGRAM test.txt "" hello


echo ""
echo "=== Test 12: Empty replacement string ==="
$PROGRAM test.txt hello ""
cat test.txt.replace


echo ""
echo "=== Test 13: Wrong arguments ==="
$PROGRAM
$PROGRAM test.txt
$PROGRAM test.txt hello


echo ""
echo "=== Test 14: File does not exist ==="
$PROGRAM does_not_exist.txt a b


echo ""
echo "=== Test 15: Empty file ==="
$PROGRAM empty.txt a b
cat empty.txt.replace

echo ""

echo "=== Test 16: Very long line ==="

python3 - << EOF
with open("longline.txt", "w") as f:
    f.write("START ")
    f.write("hello " * 10000)
    f.write(" END")
EOF

$PROGRAM longline.txt hello HI

echo "First 100 characters:"
head -c 100 longline.txt.replace
echo ""

echo "Last 100 characters:"
tail -c 100 longline.txt.replace
echo ""

echo "Done."