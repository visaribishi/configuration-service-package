import XCTest

import configurationServiceTests

var tests = [XCTestCaseEntry]()
tests += configurationServiceTests.allTests()
XCTMain(tests)
