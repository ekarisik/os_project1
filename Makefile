CC = gcc
CFLAGS = -Wall
charCount: charCount.c
	$(CC) $(CFLAGS) -o $@ charCount.c
clean_charCount:
	rm -f charCount
wordCount: wordCount.c
	$(CC) $(CFLAGS) -o $@ wordCount.c
clean_wordCount:
	rm -f wordCount
lineCount: lineCount.c
	$(CC) $(CFLAGS) -o $@ lineCount.c
clean_lineCount:
	rm -f lineCount
countOccur: countOccur.c
	$(CC) $(CFLAGS) -o $@ countOccur.c
clean_countOccur:
	rm -f countOccur
