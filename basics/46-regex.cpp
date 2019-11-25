#include <bits/stdc++.h>
// #include <regex> // for regular expression
using namespace std;

// this one will grep all the strings that matches the () part of reg
void printMatches(string str, regex reg)
{
    smatch matches; // search string to store matches
    cout << boolalpha;
    while (regex_search(str, matches, reg))
    {
        // cout << "Is there a match? " << matches.ready() << endl;
        // cout << "Are there are no matches? " << matches.empty() << endl;
        // cout << "Number of matches: " << matches.size() << endl;
        // cout << "First match: " << matches.str(1) << endl;
        cout << matches.str(1) << endl;
        str = matches.suffix().str();
    }
}

// this will grep all the strings that match the entire reg
void printMatches2(string str, regex reg)
{
    sregex_iterator currentMatch(str.begin(), str.end(), reg);
    sregex_iterator lastMatch;
    while (currentMatch != lastMatch)
    {
        smatch match = *currentMatch;
        cout << match.str() << endl;
        currentMatch++;
    }
}

int main()
{
    string str = "The ape was at the apex";
    regex reg("(ape[^ ]?)");
    printMatches(str, reg);

    string str2 = "I picked the pickle";
    regex reg2("(pick([^ ]+)?)");
    printMatches2(str2, reg2);

    string str3 = "Cat rat mat fat pat";
    regex reg3("[crmfp]at");
    printMatches2(str3, reg3);
    regex reg3_2("[C-Fc-f]at");
    printMatches2(str3, reg3_2);
    regex reg3_3("[^Cr]at");
    printMatches2(str3, reg3_3);

    // regex replace
    regex reg3_4("[Cr]at");
    string owlFood = regex_replace(str3, reg3_4, "Owl");
    cout << "owlFood: " << owlFood << endl;

    string str4 = "F.B.I. I.R.S. CIA";
    regex reg4("[^ ]\\..\\..\\..");
    printMatches2(str4, reg4);

    string str5 = "This is a\nmultiline string\n"
                  "that has many lines";
    regex reg5("\\n");
    string noLBStr = regex_replace(str5, reg5, " ");
    cout << noLBStr << endl;

    string str6 = "<name>How I met your monther</name>\n"
                  "<name>friends</name>";
    regex reg6("<name>(.*)</name>");    // greedy match
    regex reg6_2("<name>(.*?)</name>"); // lazy match
    cout << "printMatches(str6, reg6);" << endl;
    printMatches(str6, reg6);
    cout << "printMatches(str6, reg6_2);" << endl;
    printMatches(str6, reg6_2);
    cout << "printMatches2(str6, reg6);" << endl;
    printMatches2(str6, reg6);
    cout << "printMatches2(str6, reg6_2);" << endl;
    printMatches2(str6, reg6_2);

    // \\b word boundry
    // ^ outside [] matches from the start of the string
    // $ matches till the end of the string
    // [^\d] not a digit

    string str7 = "The cat cat that fell out the window";
    regex reg7("(\\b\\w+)\\s+\\1"); // \\1 is backreference to the content inside first () here that is \\b\\w+
    printMatches(str7, reg7);

    string str8 = "https://www.youtube.com "
                  "http://www.google.com";

    // Grab the URL and then provide the following output
    // using a back reference substitution
    // <a href='https://www.youtube.com'>www.youtube.com</a>
    // <a href='http://www.google.com'>www.google.com</a>

    // Grab the whole URL and the web page name

    regex reg8("(https?://([\\w\\.])+)");

    // printMatches(str8, reg8);

    string result;

    regex_replace(back_inserter(result), str8.begin(), str8.end(), reg8, "<a href='$1'>$2</a>");
    cout << result << endl;

    // ---------- Look Ahead ----------
    // A look ahead defines a pattern to match but not
    // return
    // You define the expression to look for but not
    // return
    // like this (?=expression)

    std::string str9 = " one two three four ";

    // I don't want to return the word boundaries
    std::regex reg9("(\\w+(?=\\b))");

    printMatches2(str9, reg9);
    return 0;
}