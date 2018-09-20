#include "stdafx.h"
#include "CppUnitTest.h"
#include"../wordCount/pch.h"
#include"../wordCount/pch.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	private:

	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			const char* s = "D://in.txt";
			myFile file(s);
			Assert::AreEqual(2230243,file.get_characters());

		}
		
		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			const char* s = "D://in.txt";
			myFile file(s);

			Assert::AreEqual(232213, file.get_words());

		}
		TEST_METHOD(TestMethod3)
		{
			// TODO: 在此输入测试代码
			const char* s = "D://in.txt";
			myFile file(s);

			Assert::AreEqual(15744, file.get_lines());

		}
		
	};
}