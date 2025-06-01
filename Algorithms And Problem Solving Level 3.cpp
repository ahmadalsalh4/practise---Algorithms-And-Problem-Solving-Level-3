#include "mylab.h"

void Problem1()
{
    int arr[3][3];
    MyFillArrayWithRandomMatrix(arr, 3, 3);
    cout << "the following is 3x3 random matrix:" << endl;
    MyPrintArrayLikeMatrix(arr, 3, 3);
}

void Problem2()
{
    int arr[3][3];
    MyFillArrayWithRandomMatrix(arr, 3, 3);
    cout << "the following is 3x3 random matrix:\n";
    MyPrintArrayLikeMatrix(arr, 3, 3);
    cout << "\nthe following are the sum of each row in the matrix:\n";
    MyPrintEechRowSum(arr, 3, 3);
}

void Problem3()
{
    int arr[3][3];
    MyFillArrayWithRandomMatrix(arr, 3, 3);
    cout << "the following is 3x3 random matrix:\n";
    MyPrintArrayLikeMatrix(arr, 3, 3);
    int sumarr[3];
    MySumArrayRowsToNewArray(arr, 3, 3, sumarr);
    cout << "\nthe following are the sum of each row in the matrix:\n";
    MyPrintEechRowSumUsingSumArray(sumarr, 3);
}

void Problem4()
{
    int arr[3][3];
    MyFillArrayWithRandomMatrix(arr, 3, 3);
    cout << "the following is 3x3 random matrix:\n";
    MyPrintArrayLikeMatrix(arr, 3, 3);
    cout << "\nthe following are the sum of each row in the matrix:\n";
    MyPrintEechColmSum(arr, 3, 3);
}

void Problem5()
{
    int arr[3][3];
    MyFillArrayWithRandomMatrix(arr, 3, 3);
    cout << "the following is 3x3 random matrix:\n";
    MyPrintArrayLikeMatrix(arr, 3, 3);
    int sumarr[3];
    MySumArrayColmsToNewArray(arr, 3, 3, sumarr);
    cout << "\nthe following are the sum of each row in the matrix:\n";
    MyPrintEechColmsSumUsingSumArray(sumarr, 3);
}

void Problem6()
{
    int arr[3][3];
    MyFillMatrixInOrder(arr, 3, 3);
    cout << "the following is a 3x3 ordered matrix:\n";
    MyPrintArrayLikeMatrix(arr, 3, 3);
}

void Problem7()
{
    int arr[3][3];
    MyFillMatrixInOrder(arr, 3, 3);
    cout << "the following is a 3x3 ordered matrix:\n";
    MyPrintArrayLikeMatrix(arr, 3, 3);

    int tarr[3][3];
    MyTransposMatrix(arr, 3, 3, tarr);
    cout << "\nthe following is the transposed matrix:\n";
    MyPrintArrayLikeMatrix(tarr, 3, 3);
}

void Problem8()
{
    int arr1[3][3], arr2[3][3];
    MyFillArrayWithRandomMatrix(arr1, 3, 3);
    cout << "Matrix 1:" << endl;
    MyPrintArrayLikeMatrix(arr1, 3, 3);

    MyFillArrayWithRandomMatrix(arr2, 3, 3);
    cout << "\nMatrix 2:" << endl;
    MyPrintArrayLikeMatrix(arr2, 3, 3);

    int marr[3][3];
    Mul2Array(arr1, arr2, marr, 3, 3);
    cout << "\nmul of 2 matrix:" << endl;
    MyPrintArrayLikeMatrix(marr, 3, 3);
}

void Problem9()
{
    int arr[3][3];
    MyFillArrayWithRandomMatrix(arr, 3, 3);

    cout << "Matrix 1:" << endl;
    MyPrintArrayLikeMatrix(arr, 3, 3);

    cout << "\nmiddle row of matrix1 is :\n";
    MyPrintMiddleRow(arr, 3, 3);

    cout << "\nmiddle colm of matrix1 is :\n";
    MyPrintMiddlecolm(arr, 3, 3);
}

void Problem10()
{
    int arr[3][3];
    MyFillArrayWithRandomMatrix(arr, 3, 3);

    cout << "Matrix 1:" << endl;
    MyPrintArrayLikeMatrix(arr, 3, 3);

    cout << "\nsum of matrix1 is: " << MySumOfMatrixElement(arr, 3, 3) << endl;
}

void Problem11()
{
    int matrix1[3][3];
    MyFillArrayWithRandomMatrix(matrix1, 3, 3);
    cout << "Matrix 1:" << endl;
    MyPrintArrayLikeMatrix(matrix1, 3, 3);

    int matrix2[3][3];
    MyFillArrayWithRandomMatrix(matrix2, 3, 3);
    cout << "\nMatrix 2:" << endl;
    MyPrintArrayLikeMatrix(matrix2, 3, 3);

    if (MyCheckIfSumOfMatricesAreEqual(matrix1, matrix2, 3, 3))
        cout << "\nyes, both matrices are equal\n";
    else
        cout << "\nno, matrices are not equal\n";
}

void Problem12()
{
    int matrix1[3][3];
    MyFillArrayWithRandomMatrix(matrix1, 3, 3);
    cout << "Matrix 1:" << endl;
    MyPrintArrayLikeMatrix(matrix1, 3, 3);

    int matrix2[3][3];
    MyFillArrayWithRandomMatrix(matrix2, 3, 3);
    cout << "\nMatrix 2:" << endl;
    MyPrintArrayLikeMatrix(matrix2, 3, 3);

    if (MyCheckIfMatricesAreTypical(matrix1, matrix2, 3, 3))
        cout << "\nyes, both matrices are typical\n";
    else
        cout << "\nno, matrices are not typical\n";
}

void Problem13()
{
    int matrix1[3][3];
    MyFillArrayWithRandomMatrix(matrix1, 3, 3);
    cout << "\nMatrix1:" << endl;
    MyPrintArrayLikeMatrix(matrix1, 3, 3);

    if (MyIsMatrixIdentity(matrix1, 3, 3))
        cout << "\nyes, matrix is identity\n";
    else
        cout << "\nno, matrix is not identity\n";
}

void Problem14()
{
    int matrix1[3][3];
    MyFillArrayWithRandomMatrix(matrix1, 3, 3);
    cout << "\nMatrix1:" << endl;
    MyPrintArrayLikeMatrix(matrix1, 3, 3);

    if (MyIsMatrixScaler(matrix1, 3, 3))
        cout << "\nyes, matrix is scaler\n";
    else
        cout << "\nno, matrix is not scaler\n";
}

void Problem15()
{
    int matrix1[3][3];
    MyFillArrayWithRandomMatrix(matrix1, 3, 3);
    cout << "\nMatrix1:" << endl;
    MyPrintArrayLikeMatrix(matrix1, 3, 3);

    int number = MyReadIntNumber("\nenter a number to count in matrix :", 1, 10);
    cout << "number " << number << " count in matrix is "
        << MyCountNumberInMatrix(matrix1, 3, 3, number) << endl;
}

void Problem16()
{
    int matrix1[3][3];
    //chance MyRandomNumber in MyFillArrayWithRandomMatrix to (0, 10);
    MyFillArrayWithRandomMatrix(matrix1, 3, 3);
    cout << "\nMatrix1:" << endl;
    MyPrintArrayLikeMatrix(matrix1, 3, 3);

    if (MyItIsSparseMatrix(matrix1, 3, 3))
        cout << "\nyes, it is sparse\n";
    else
        cout << "\nno, it is not sparse\n";
}

void Problem17()
{
    int matrix1[3][3];
    MyFillArrayWithRandomMatrix(matrix1, 3, 3);
    cout << "\nMatrix1:" << endl;
    MyPrintArrayLikeMatrix(matrix1, 3, 3);

    int number = MyReadIntNumber("\nenter a number to look for in matrix :", -1000, 1000);

    if (MyCheckIfThenumberInTheMatrix(matrix1, 3, 3, number))
        cout << "\nyes, it is there\n";
    else
        cout << "\nno, it is not there\n";
}

void Problem18()
{
    int matrix1[3][3];
    MyFillArrayWithRandomMatrix(matrix1, 3, 3);
    cout << "\nMatrix1:" << endl;
    MyPrintArrayLikeMatrix(matrix1, 3, 3);

    int matrix2[3][3];
    MyFillArrayWithRandomMatrix(matrix2, 3, 3);
    cout << "\nMatrix2:" << endl;
    MyPrintArrayLikeMatrix(matrix2, 3, 3);

    int intersected_arr[9];
    int length = 0;
    MyGetIntersectedNumbers(matrix1, matrix2, 3, 3, intersected_arr, length);

    cout << "\nintersected numbers are:\n";
    MyPrintArray(intersected_arr, length);

    int intersected_arr_ready[9];
    int length_ready = 0;
    MyDeleteDuplicateNumbersInArray(intersected_arr, intersected_arr_ready, length, length_ready);

    cout << "\nintersected numbers after delete Duplicate numbers are:\n";
    MyPrintArray(intersected_arr_ready, length_ready);
}

void Problem19()
{
    int matrix1[3][3];
    MyFillArrayWithRandomMatrix(matrix1, 3, 3);
    cout << "\nMatrix1:" << endl;
    MyPrintArrayLikeMatrix(matrix1, 3, 3);

    int min = 0;
    int max = 0;
    MyMinMaxValueInMatrix(matrix1, 3, 3, min, max);
    printf("\nminimum number is: %d\n\nmaximum number is: %d\n", min, max);
}

void Problem20()
{
    //int matrix1[3][3];
    int matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
    //MyFillArrayWithRandomMatrix(matrix1, 3, 3);
    cout << "\nMatrix1:" << endl;
    MyPrintArrayLikeMatrix(matrix1, 3, 3);

    if (MyIsPalindromeMatrix(matrix1, 3, 3))
        cout << "\nyes, matrix is palindrome\n";
    else
        cout << "\nno, matrix is not palindrome\n";
}

void Problem21()
{
    MyPrintFibonacciSeriesUsingFor(10);
}

void Problem22()
{
    cout << "1  ";
    MyPrintFibonacciSeriesUsingRecursion(10,1,0);
}

void Problem23()
{
    MyPrintFirstLetterOfEcheWord(MyReadText("please enter your string:\n"));
}

void Problem24()
{
    string s1 = MyReadText("please enter your string:\n");
    s1 = MyUpperEcheLetterOfEcheWord(s1);
    cout << "\nafter conversion to upper:\n" << s1 << endl;
}

void Problem25()
{
    string s1 = MyReadText("please enter your string:\n");
    s1 = MyLowerEcheLetterOfEcheWord(s1);
    cout << "\nafter conversion to lower:\n" << s1 << endl;
}

void Problem26()
{
    string s1 = MyReadText("please enter your string:\n");
    string s1temp = s1;

    s1 = MyUpperStringChars(s1);
    cout << "\nstring after upper:\n" << s1 << endl;

    s1temp = MyLowerStringChars(s1temp);
    cout << "\nstring after lower:\n" << s1temp << endl;
}

void Problem27()
{
    char x = MyReadLetter("please enter a charectar:\n");
    x = MyInvertLetter(x);
    cout << "\nchar after inverting case:\n" << x << endl;
}

void Problem28()
{
    string s1 = MyReadText("please enter your string:\n");
    s1 = InvertAllStringLetter(s1);
    cout << "\nstring after invertiring all leter case:\n" << s1 << endl;
}

void Problem29()
{
    string s1 = MyReadText("please enter your string:\n");

    cout << "\nstring length = " << s1.length();
    cout << "\ncapital letters count = " << MyCountCapitalLetters(s1);
    cout << "\nsmall letters count = " << MyCountSmallLetters(s1) << endl;

    cout << "\nstring length = " << MyLetterCounter(s1, enLetterCounter::all);
    cout << "\ncapital letters count = " << MyLetterCounter(s1, enLetterCounter::capital);
    cout << "\nsmall letters count = " << MyLetterCounter(s1, enLetterCounter::small);
    cout << "\ndigit letters count = " << MyLetterCounter(s1, enLetterCounter::digit);
    cout << "\nspace letters count = " << MyLetterCounter(s1, enLetterCounter::space);
    cout << "\nother letters count = " << MyLetterCounter(s1, enLetterCounter::other);
}

void Problem30()
{
    string s1 = MyReadText("please enter your string:\n");
    char x = MyReadLetter("please enter a charectar:\n");
    cout << "\nletter '" << x << "' count = " << MyCountLetterInString(s1, x, true) << endl;
}

void Problem31()
{
    string s1 = MyReadText("please enter your string:\n");
    char x = MyReadLetter("please enter a charectar:\n");
    cout << "\nletter '" << x << "' count = " << MyCountLetterInString(s1, x, true) << endl;
    cout << "\nletter '" << x << "' or '" << MyInvertLetter(x)
        << "' count = " << MyCountLetterInString(s1, x) << endl;
}

void Problem32()
{
    char x = MyReadLetter("please enter a charectar:\n");
    if (MyIsItVowel(x))
        cout << "yes, letter '" << x << "' is vowel";
    else
        cout << "no, letter '" << x << "' is not vowel";
}

void Problem33()
{
    string s1 = MyReadText("please enter your string:\n");
    cout << "numbers of vowels = " << MyCountVowels(s1) << endl;
}

void Problem34()
{
    string s1 = MyReadText("please enter your string:\n");
    cout << "vowels in string are: ";
    MyPrintVowelsInString(s1);
}

void Problem35()
{
    MyPrintEachWordInString(MyReadText());
}

void Problem36()
{
    int x = MyPrintNumberOfWordsInString(MyReadText());
    cout << "number of words in your string is " << x << endl;
}

void Problem37()
{
    vector <string> vs1 = MySplitString(MyReadText(), " ");
    cout << "Tokens = " << vs1.size() << endl;
    for (string& word : vs1)
        cout << word << endl;
}

void Problem38()
{
    string s1 = "   abc   ";
    cout << "trim left  = [" << MyTrimLeft(s1) << "]" << endl;
    cout << "trim right = [" << MyTrimRight(s1) << "]" << endl;
    cout << "trim       = [" << MyTrim(s1) << "]" << endl;
}

void Problem39()
{
    vector <string> vs1 = { "ahmad","mohammed","fadi" };
    string separator = ",";
    cout << "separator used = [" << separator << "]" << endl;
    cout << "\nvector before join :\n";
    for (string& word : vs1)
        cout << word << endl;
    cout << "\nvector after join :\n" << MyJoinString(vs1, separator) << endl;
}

void Problem40()
{
    vector <string> vs1 = { "ahmad","mohammed","fadi" };
    string arrofstring[] = { "ahmad","mohammed","fadi" };
    short arrofstring_length = 3;
    string separator = ",";
    cout << "separator used = [" << separator << "]" << endl;
    cout << "\nvector after join :\n" << MyJoinString(vs1, separator) << endl;
    cout << "\narr of string after join :\n" << MyJoinString(arrofstring, separator, arrofstring_length) << endl;
}

void Problem41()
{
    string s1 = MyReadText("please enter your string :\n");
    cout << "\nstring after reversing words :\n" << MyReverseString(s1) << endl;
}

void Problem42()
{
    string s1 = "hello my name is ahmad ,my name is not mohu my name is ahmad yes";
    string original_word = "ahmad";
    string new_word = "mohammed";
    cout << "original string\n" << s1;
    cout << "\nnew string\n" << MyReplaceWordUsingBuiltInFunction(s1, original_word, new_word) << endl;
}

void Problem43()
{
    string s1 = "hello my name is Ahmad ,my name is not ali my name is Ahmad yes";
    string original_word = "ahmad";
    string new_word = "mohammed";
    cout << "original string\n" << s1;
    cout << "\n\nreplace with using match case:\n" << MyReplaceWord(s1, original_word, new_word) << endl;
    cout << "\nreplace without using match case:\n" << MyReplaceWord(s1, original_word, new_word,false) << endl;
}

void Problem44()
{
    string s1 = "hello,my name is ahmad.a";
    cout << s1 << endl << endl;
    cout << MyRemovePunctions(s1) << endl;
}

void Problem45()
{
    stClient Client = MyReadNewClient();
    cout << "\n\nClient Record for saving is:\n" << MyConvertRecordToLine(Client);
}

void Problem46()
{
    string ClientData = "a120#//#1234#//#ahmad alsaleh#//#0534431132#//#1500.12";
    cout << "Line record is:.\n" << ClientData << endl;
    stClient ClientRecord = MyConvertLineDataToRecord(ClientData);
    cout << "\n\nthe following is the extracted client record:\n\n";
    MyPrintClientData(ClientRecord);
}

void Problem47()
{
    MyAddClients();
}

void Problem48()
{
    vector <string> VFileContant;
    MyLoadFileContentToVector(ClientFileName, VFileContant);
    MyPrintClientsList(VFileContant);
}

void Problem49()
{
    string AccountNumber = MyReadText("Please enter account number: ");
    MyPrintClientDataByAccountNumber(AccountNumber);
}

void Problem50()
{
    string AccountNumber = MyReadText("Please enter account number: ");
    MyDeleteClient(AccountNumber);
}

void Problem51()
{
    string AccountNumber = MyReadText("Please enter account number: ");
    MyUpdateClientDataByAccountNumber(AccountNumber);
}

int main()
{
    CallSystem("\nPress any key to exit...");
    return 0;
}
