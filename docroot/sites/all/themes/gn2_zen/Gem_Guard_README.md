### Helpful tutorials & guides:

http://guides.rubygems.org/command-reference/
http://bundler.io/

https://gist.github.com/ElijahLynn/3661100
https://gist.github.com/facelordgists/5416559
http://santos.arizona.edu/drupal-zen-sub-theme-sass-and-compass-quick-start

### Installing and managing Ruby on El Capitan using Homebrew
https://gorails.com/setup/osx/10.11-el-capitan

### Updating ruby
https://devcenter.heroku.com/articles/ruby-versions

---------------------------------------------------------------------------

```
$ cd ~/workspace/gn2/docroot/sites/all/themes/gn2_zen
$ rvm install ruby-2.3.1
```

(or whatever the latest version is)

or, using Homebrew:

```$ rbenv install 2.3.1
$ rbenv global 2.3.1
```

---------------------------------------------------------------------------

Richard uninstalled a bunch of stuff he won't need (but others might):

```
gem uninstall --force jekyll breakpoint CFPropertyList chunky_png compass compass-core compass-import-once ffi libxml-ruby mini_portile minitest multi_json power_assert rake rb-fsevent rb-inotify rubygems-update sass sassy-maps sqlite3 test-unit zen-grids colorator compass-normalize compass-rgbapng jekyll jekyll-sass-converter jekyll-watch kramdown liquid listen mercenary rouge safe_yaml toolkit
```

---------------------------------------------------------------------------

The following commands install bundler, and then all the gems that are defined in the Gemfile. This will also create the Gemfile.lock file:

```
$ gem update --system
$ gem install bundler
$ rbenv rehash (if you have recently upgraded Ruby version)
$ bundle install [can also just use 'bundle', I believe]
```

NOTE:  If you have recently upgraded your ruby version, run "rbenv rehash" after "gem install bundler" 

http://stackoverflow.com/questions/19342044/how-to-fix-your-ruby-version-is-1-9-3-but-your-gemfile-specified-2-0-0

---------------------------------------------------------------------------

To create a guard file (if you want to use Guard):
`$ guard init`

---------------------------------------------------------------------------

To start compass watching, run this command and it will obey the Gemfile:

`$ bundle exec compass watch`

or, to use guard:

```$ bundle exec guard```

