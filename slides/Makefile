#################################################################
# Makefile (use GNU-Make)
#
# $* file name part of the current dependent with suffix deleted
#    (only for suffix rules)
# $@ full target name
# $< out-of-date module (only for suffix rules)
# $? list of components to be rebuilt
#
#################################################################

.DEFAULT:
	  @echo "This target needs remaking: default = [$<]"
	  @echo "Do you really use GNU-Make?"

MAINFILE       := slides
TEXSOURCES     := $(wildcard *.tex)
AUXFILES       := $(subst tex,aux,$(TEXSOURCES))
SCRIPTDIR      := scripts
IMAGEDIR       := images

pdf: $(MAINFILE).tex $(TEXSOURCES) images 
	- rm -f $(MAINFILE).pdf
	- rm -f $(MAINFILE).aux
	pdflatex -draftmode -file-line-error $(MAINFILE)
	pdflatex $(MAINFILE)

images:
	 - make -C $(IMAGEDIR)

clean:
	- find . | egrep ".*((\.(aux|idx|ind|ilg|log|blg|bbl|toc|lof|lot|dvi|tlf|tlt|nav|snm|vrb))|~)$$" | xargs rm
	- rm -f $(MAINFILE).out thumb???.png thumbdta.tex thumbpdf.*

.PHONY: clean images
#end of Makefile
