import XCTest
import SwiftTreeSitter
import TreeSitterFirescript

final class TreeSitterFirescriptTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_firescript())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Firescript grammar")
    }
}
