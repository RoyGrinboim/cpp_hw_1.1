#define CHECK DOCTEST_CHECK
#include "doctest.h"
#include "PhoneticFinder.hpp"

TEST_CASE("hello")//1
{
    CHECK(phonetic::find("hello world", "hello")=="hello");
}

TEST_CASE("world")//2
{
    CHECK(phonetic::find("hello vorld", "WORLD")=="vorld");
}

TEST_CASE("dond")//3
{
    CHECK(phonetic::find("Dond vorri be haffy", "dont")=="Dond");
}

TEST_CASE("vorri")//4
{
    CHECK(phonetic::find("Dond vorri be haffy", "worry")=="vorri");
}

TEST_CASE("be")//5
{
    CHECK(phonetic::find("Dond vorri be haffy", "be")=="be");
}

TEST_CASE("haffy")//6
{
    CHECK(phonetic::find("Dond vorri be haffy", "happy")=="haffy");
}

TEST_CASE("programing")//7
{
    CHECK(phonetic::find("cpp programing", "programING")=="programing");
}

TEST_CASE("corona1")//8
{
    CHECK(phonetic::find("coronawyrus quwyt against curuna peer", "coronavirus")=="coronawyrus");
}

TEST_CASE("quwyt")//9
{
    CHECK(phonetic::find("coronawyrus quwyt against curuna peer", "covid")=="quwyt");
}

TEST_CASE("against")//10
{
    CHECK(phonetic::find("coronawyrus quwyt against curuna peer", "AgAyNsT")=="against");
}

TEST_CASE("corona2")//11
{
    CHECK(phonetic::find("coronawyrus quwyt against curuna peer", "kOrOna")=="curuna");
}

TEST_CASE("peer")//12
{
    CHECK(phonetic::find("coronawyrus quwyt against curuna peer", "bEEr")=="peer");
}

TEST_CASE("ariel")//13
{
    CHECK(phonetic::find("ariel university", "ARyEL")=="ariel");
}

TEST_CASE("university")//14
{
    CHECK(phonetic::find("ariel university", "onywersidi")=="university");
}

TEST_CASE("home")//15
{
    CHECK(phonetic::find("hOme isolation", "HuME")=="hOme");
}

TEST_CASE("isolation")//16
{
    CHECK(phonetic::find("hOme isolation", "ISOLATION")=="isolation");
}

TEST_CASE("one")//17
{
    CHECK(phonetic::find("une hantret DESTS", "one")=="une");
}

TEST_CASE("handred")//18
{
    CHECK(phonetic::find("une hantret DESTS", "handred")=="hantret");
}

TEST_CASE("tests")//19
{
    CHECK(phonetic::find("une hantret DESTS", "tests")=="DESTS");
}

TEST_CASE("oneWordCheck")//20
{
    CHECK(phonetic::find("UNEvurtQHEKK", "onewordcheck")=="UNEvurtQHEKK");
}

TEST_CASE("no word fit")//1
{
    CHECK(phonetic::find("no words", "word")=="no word");
}

TEST_CASE("empty")//2
{
    CHECK(phonetic::find("", "WORD")=="no word");
}

TEST_CASE("big")//3
{
    CHECK(phonetic::find("BIG LETTERS ONLY AND THE CHECK IS SMALL LETTERS", "big")=="BIG");
}

TEST_CASE("LETTERS")//4
{
    CHECK(phonetic::find("BIG LETTERS ONLY AND THE CHECK IS SMALL LETTERS", "letters")=="LETTERS");
}

TEST_CASE("ONLY")//5
{
    CHECK(phonetic::find("BIG LETTERS ONLY AND THE CHECK IS SMALL LETTERS", "only")=="ONLY");
}

TEST_CASE("AND")//6
{
    CHECK(phonetic::find("BIG LETTERS ONLY AND THE CHECK IS SMALL LETTERS", "and")=="AND");
}

TEST_CASE("check")//7
{
    CHECK(phonetic::find("BIG LETTERS ONLY AND THE CHECK IS SMALL LETTERS", "check")=="CHECK");
}

TEST_CASE("THE")//8
{
    CHECK(phonetic::find("BIG LETTERS ONLY AND THE CHECK IS SMALL LETTERS", "the")=="THE");
}

TEST_CASE("quwyt")//9
{
    CHECK(phonetic::find("BIG LETTERS ONLY AND THE CHECK IS SMALL LETTERS", "is")=="IS");
}

TEST_CASE("SMALL")//10
{
    CHECK(phonetic::find("BIG LETTERS ONLY AND THE CHECK IS SMALL LETTERS", "small")=="SMALL");
}

TEST_CASE("LETTERS2")//11
{
    CHECK(phonetic::find("BIG LETTERS ONLY AND THE CHECK IS SMALL LETTERS", "Letters")=="LETTERS");
}

TEST_CASE("my")//12
{
    CHECK(phonetic::find("my name is inigo montoya", "Mi")=="my");
}

TEST_CASE("name")//13
{
    CHECK(phonetic::find("my name is inigo montoya", "NAme")=="name");
}

TEST_CASE("is2")//14
{
    CHECK(phonetic::find("my name is inigo montoya", "YS")=="is");
}

TEST_CASE("inigo")//15
{
    CHECK(phonetic::find("my name is inigo montoya", "ynyju")=="inigo");
}

TEST_CASE("montoya")//16
{
    CHECK(phonetic::find("my name is inigo montoya", "MONtia")=="montoya");
}

TEST_CASE("vvv")//17
{
    CHECK(phonetic::find("vvv", "WWWW")=="vvv");
}

TEST_CASE("qkc")//18
{
    CHECK(phonetic::find("qkc", "ccc")=="qkc");
}

TEST_CASE("oooo")//19
{
    CHECK(phonetic::find("oooo", "UUUU")=="oooo");
}

TEST_CASE("GGGG")//20
{
    CHECK(phonetic::find("GGGG", "GgJj")=="GGGG");
}

TEST_CASE("long")//1
{
    CHECK(phonetic::find("long sentece that will be checked with spce at the end ", "LUNJ")=="long");
}

TEST_CASE("sentence")//2
{
    CHECK(phonetic::find("long sentece that will be checked with spce at the end ", "sEnDeNkE")=="sentence");
}

TEST_CASE("that")//3
{
    CHECK(phonetic::find("long sentece that will be checked with spce at the end ", "Dhat")=="that");
}

TEST_CASE("will")//4
{
    CHECK(phonetic::find("long sentece that will be checked with spce at the end ", "vyll")=="will");
}

TEST_CASE("be2")//5
{
    CHECK(phonetic::find("long sentece that will be checked with spce at the end ", "BE")=="be");
}

TEST_CASE("checked")//6
{
    CHECK(phonetic::find("long sentece that will be checked with spce at the end ", "qheqqet")=="checked");
}

TEST_CASE("with2")//7
{
    CHECK(phonetic::find("long sentece that will be checked with spce at the end ", "widh")=="with");
}

TEST_CASE("space")//8
{
    CHECK(phonetic::find("long sentece that will be checked with spce at the end ", "spAqe")=="space");
}

TEST_CASE("at")//9
{
    CHECK(phonetic::find("long sentece that will be checked with spce at the end ", "AD")=="at");
}

TEST_CASE("the2")//10
{
    CHECK(phonetic::find("long sentece that will be checked with spce at the end ", "DHE")=="the");
}

TEST_CASE("end")//11
{
    CHECK(phonetic::find("long sentece that will be checked with spce at the end ", "ENT")=="end");
}

TEST_CASE("stay")//12
{
    CHECK(phonetic::find("sdai ad hUME", "stay")=="sdai");
}

TEST_CASE("ad")//13
{
    CHECK(phonetic::find("sdai ad hUME", "at")=="ad");
}

TEST_CASE("hUME")//14
{
    CHECK(phonetic::find("sdai ad hUME", "home")=="hUME");
}

TEST_CASE("sss")//15
{
    CHECK(phonetic::find("szs zsz", "sss")=="szs");
}

TEST_CASE("dddd")//16
{
    CHECK(phonetic::find("dddd", "DdtT")=="dddd");
}

TEST_CASE("iiii")//17
{
    CHECK(phonetic::find("iiii", "yyyy")=="iiii");
}

TEST_CASE("aaa")//18
{
    CHECK(phonetic::find("AaAa", "aaaa")=="AaAa");
}

TEST_CASE("bbbb")//19
{
    CHECK(phonetic::find("bbbb", "BBBB")=="bbbb");
}

TEST_CASE("space2")//20
{
    CHECK(phonetic::find(" space at the start", "space")=="space");
}

TEST_CASE("at3")//1
{
    CHECK(phonetic::find( " space at the start", "ad")=="at");
}

TEST_CASE("the3")//2
{
    CHECK(phonetic::find("space at the start", "DHE")=="the");
}

TEST_CASE("start2")//3
{
    CHECK(phonetic::find("space at the start", "Ztart")=="start");
}

TEST_CASE("four")//4
{
    CHECK(phonetic::find("four FOUR FoUr FouR", "four")=="four");
}

TEST_CASE("five")//5
{
    CHECK(phonetic::find("FYWE", "five")=="FYWE");
}

TEST_CASE("six")//6
{
    CHECK(phonetic::find("zyx", "six")=="zyx");
}

TEST_CASE("seven")//7
{
    CHECK(phonetic::find("zewen", "seven")=="zewen");
}

TEST_CASE("eight")//8
{
    CHECK(phonetic::find("eyghd", "eight")=="eyghd");
}

TEST_CASE("nine")//9
{
    CHECK(phonetic::find("nyne", "nine")=="nyne");
}

TEST_CASE("ten")//10
{
    CHECK(phonetic::find("den", "ten")=="den");
}

TEST_CASE("those")//11
{
    CHECK(phonetic::find("those were almost ten numbers from the four to ten", "DEN")=="ten");
}

TEST_CASE("were")//12
{
    CHECK(phonetic::find("those were almost ten numbers from the four to ten", "vere")=="were");
}

TEST_CASE("almost")//13
{
    CHECK(phonetic::find("those were almost ten numbers from the four to ten", "alMOST")=="almost");
}

TEST_CASE("10")//14
{
    CHECK(phonetic::find("those were almost ten numbers from the four to ten", "DeN")=="ten");
}

TEST_CASE("numbers")//15
{
    CHECK(phonetic::find("those were almost ten numbers from the four to ten", "nombers")=="numbers");
}

TEST_CASE("from")//16
{
    CHECK(phonetic::find("those were almost ten numbers from the four to ten", "brum")=="from");
}

TEST_CASE("the4")//17
{
    CHECK(phonetic::find("those were almost ten numbers from the four to ten", "DHE")=="the");
}

TEST_CASE("four2")//18
{
    CHECK(phonetic::find("those were almost ten numbers from the four to ten", "FOOR")=="four");
}

TEST_CASE("to3")//19
{
    CHECK(phonetic::find("those were almost ten numbers from the four to ten", "du")=="to");
}

TEST_CASE("ten4")//20
{
    CHECK(phonetic::find("those were almost ten numbers from the four to ten", "TEN")=="ten");
}

TEST_CASE("last")//1
{
    CHECK(phonetic::find( "last twenty tests of the matala", "LAZD")=="last");
}

TEST_CASE("twenty")//2
{
    CHECK(phonetic::find("last twenty tests of the matala", "dvendi")=="twenty");
}

TEST_CASE("tests")//3
{
    CHECK(phonetic::find("last twenty tests of the matala", "deztz")=="tests");
}

TEST_CASE("fo")//4
{
    CHECK(phonetic::find("last twenty tests of the matala", "op")=="of");
}

TEST_CASE("hte")//5
{
    CHECK(phonetic::find("last twenty tests of the matala", "THe")=="the");
}

TEST_CASE("matala")//6
{
    CHECK(phonetic::find("last twenty tests of the matala", "MAdAlA")=="matala");
}

TEST_CASE("fff")//7
{
    CHECK(phonetic::find("pfpf", "FFpf")=="ffff");
}

TEST_CASE("f")//8
{
    CHECK(phonetic::find("ffbp fbfpf", "fffff")=="fbfpf");
}

TEST_CASE("vw")//9
{
    CHECK(phonetic::find("vWWV", "vvv")=="no word");
}

TEST_CASE("cpp2")//10
{
    CHECK(phonetic::find("cbb class", "cpp")=="cbb");
}

TEST_CASE("class")//11
{
    CHECK(phonetic::find("cpp clazz", "claSZ")=="clazz");
}

TEST_CASE("jjjj")//12
{
    CHECK(phonetic::find("ggg jjjjj", "ggggg")=="jjjjj");
}

TEST_CASE("www")//13
{
    CHECK(phonetic::find("world wide veb", "vorlt")=="world");
}

TEST_CASE("wide")//14
{
    CHECK(phonetic::find("world vite veb", "wide")=="vite");
}

TEST_CASE("veb")//15
{
    CHECK(phonetic::find("world wide web", "vep")=="web");
}

TEST_CASE("spiders")//16
{
    CHECK(phonetic::find("spiders from mars", "zpyTerz")=="spiders");
}

TEST_CASE("from 2")//17
{
    CHECK(phonetic::find("spiders from mars", "FrOm")=="from");
}

TEST_CASE("mars")//18
{
    CHECK(phonetic::find("spiders from mars", "MARS")=="mars");
}

TEST_CASE("major")//19
{
    CHECK(phonetic::find("magor tom", "MAJor")=="magor");
}

TEST_CASE("tom")//20
{
    CHECK(phonetic::find("major dom", "TOM")=="dom");
}