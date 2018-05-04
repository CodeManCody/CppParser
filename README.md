Cody Morgan

codymorgan89@gmail.com



prog2_1:

    Files included: prog2_1.hpp, prog2_1.cpp

    Functionality:
        This class is a Tokenizer that tokenizes a text file passed into the command line, line-by-line.
        It starts with the first line of the text file, and tokenizes it, split by space. It then checks
        each token in the line, making sure all tokens are valid. If so, the entire line is pushed to the queue
        for parsing later in the program. If a token is invalid in a line, the entire line is ignored and not 
        enqueued. This process is repeated until all lines are read.

prog2_2:

    Files included: prog2_2.cpp

    Example compilation: g++ prog2_2.cpp prog2_1.cpp -o prog2_2

    Example execution: ./prog2_2 testfile.txt

    Functionality:
        This is a driver program for the Tokenizer class. If any tokenization errors are present, the processing 
        of the file is stopped, and nothing is outputted but the tokenization error. If no tokenization errors are 
        present, the tokens are outputted comma-separated, line-by-line.

prog2_3:

    Files included: prog2_3.hpp, prog2_3.cpp

    Functionality:
        This is a Parser class that parses a text file, line-by-line. If an input line is parse error free,
        the parse function returns true, and false otherwise. This is a simple class that lays out all the 
        parsing rules for the text file.

prog2_4:

    Files included: prog2_4.cpp

    Example compilation: g++ prog2_4.cpp prog2_3.cpp prog2_1.cpp -o prog2_4

    Example execution: ./prog2_4 testfile.txt

    Functionality:
        This is a driver for the Tokenizer and Parser classes. This driver first tokenizes the input lines from
        the text file, and then parses them. If any tokenization errors are present, they are outputted, and the
        program ends execution. Then, after tokenizing, if parse errors are present, the parse errors are
        outputted and the program ends execution. If all lines of input are valid, they are printed to STDOUT
        line-by-line and comma-separated.

