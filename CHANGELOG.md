# Changelog
All notable changes to this project will be documented in this file.

## Unreleased
- Map `Fn` + `Backspace` to `Delete` (#12)

## [1.0.0] - 2021-08-14
### Changed
- Swap left `Alt` and left `GUI` keys. Right `Alt` remains unchanged. (#1, #6)
- Swap `Esc` and Backtick (`` ` ``) (#3)
- Add [QMK Tap Dance Feature](https://beta.docs.qmk.fm/using-qmk/software-features/feature_tap_dance) to ESC/Backtick key, so the behavior when hitting the key varies based on the number of times it is hit in rapid succession (#5):
    - Once: `` ` ``
    - Twice: `<Esc>`
    - Three times: `` ``` ``
    - etc.

### Added
- Add default `massdrop/alt` configuration
