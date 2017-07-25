### Helpful tutorials & guides:

http://guides.rubygems.org/command-reference/
http://bundler.io/
https://gist.github.com/ElijahLynn/3661100
https://gist.github.com/facelordgists/5416559
http://santos.arizona.edu/drupal-zen-sub-theme-sass-and-compass-quick-start

### Installing and managing Ruby using RVM
https://rvm.io/

---------------------------------------------------------------------------

```
$ cd ~/workspace/gn2/docroot/sites/all/themes/gn2_zen
$ rvm install ruby-2.3.1
```

(this site specifies 2.3.1)

---------------------------------------------------------------------------

The following commands install bundler, and then all the gems that are defined in the Gemfile. This will also create the Gemfile.lock file (note, you might need to preface some of these with `sudo` if you encounter permissions errors):

```
$ gem update --system
$ gem install bundler
$ bundle install [can also just use 'bundle', I believe]
```

---------------------------------------------------------------------------

To create a guard file (if you want to use Guard and if for some reason there is no guard file present):

`$ guard init`

---------------------------------------------------------------------------

To start compass watching, run this command and it will obey the Gemfile:

`$ bundle exec compass watch`

or, to use guard:

```$ bundle exec guard```

but, don't just run `guard` by itself -- you might encounter errors.
