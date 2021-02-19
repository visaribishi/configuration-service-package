import XCTest
@testable import configurationService

final class configurationServiceTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        XCTAssertEqual(configurationService().text, "Hello, World!")
    }

    static var allTests = [
        ("testExample", testExample),
    ]
}
