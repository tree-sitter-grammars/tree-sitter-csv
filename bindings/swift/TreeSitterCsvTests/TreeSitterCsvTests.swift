import XCTest
import SwiftTreeSitter
import TreeSitterCsv

final class TreeSitterCsvTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_csv())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Csv grammar")
    }
}
