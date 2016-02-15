/*
Error: Invalid CSS after "@import "mobile"": expected selector or at-rule, was "@import "laptop""
        on line 2 of DEV/sass/css.scss

1: @import "mobile"
2: @import "laptop"

Backtrace:
DEV/sass/css.scss:2
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/gems/sass-3.4.21/lib/sass/scss/parser.rb:1179:in `expected'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/gems/sass-3.4.21/lib/sass/scss/parser.rb:1115:in `expected'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/gems/sass-3.4.21/lib/sass/scss/parser.rb:40:in `parse'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/gems/sass-3.4.21/lib/sass/engine.rb:403:in `_to_tree'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/gems/sass-3.4.21/lib/sass/engine.rb:378:in `_render_with_sourcemap'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/gems/sass-3.4.21/lib/sass/engine.rb:295:in `render_with_sourcemap'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/gems/sass-3.4.21/lib/sass/exec/sass_scss.rb:414:in `run'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/gems/sass-3.4.21/lib/sass/exec/sass_scss.rb:63:in `process_result'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/gems/sass-3.4.21/lib/sass/exec/base.rb:52:in `parse'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/gems/sass-3.4.21/lib/sass/exec/base.rb:19:in `parse!'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/gems/sass-3.4.21/bin/sass:13:in `<top (required)>'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/bin/sass:22:in `load'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/bin/sass:22:in `<main>'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/bin/ruby_executable_hooks:15:in `eval'
/Users/sonyadunn/.rvm/gems/ruby-2.3.0/bin/ruby_executable_hooks:15:in `<main>'
*/
body:before {
  white-space: pre;
  font-family: monospace;
  content: "Error: Invalid CSS after \"@import \"mobile\"\": expected selector or at-rule, was \"@import \"laptop\"\"\A         on line 2 of DEV/sass/css.scss\A \A 1: @import \"mobile\"\A 2: @import \"laptop\""; }
