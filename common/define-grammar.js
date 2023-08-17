/**
 * @file CSV & TSV grammar for tree-sitter
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 *
 * @param {string} dialect
 *
 * @param {string} separator
 *
 * @return {GrammarSchema<any>}
 *
 */
module.exports = function defineGrammar(dialect, separator) {
  return grammar({
    name: dialect,

    rules: {
      document: $ => seq(
        repeat(seq($.row, /\r|\r\n|\n/)),
        optional($.row),
      ),

      row: $ => choice(
        seq(repeat(separator), $.field, repeat(seq(repeat(separator), $.field)), repeat(separator)),
        repeat1(separator),
      ),
      field: $ => choice($.text, $.number, $.float, $.boolean),

      text: _ => token(choice(
        new RegExp(`[^${separator}"\n\r]+`),
        seq('"', repeat(choice(/[^"]/, '""')), '"'),
      )),
      number: _ => /\d+/,
      float: _ => /\d*\.\d+/,
      boolean: _ => choice('true', 'false'),
    },
  });
};