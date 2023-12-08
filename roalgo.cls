\RequirePackage{expl3}
\ProvidesExplClass{roalgo}{2023-11-20}{0.1.0}{RoAlgo LaTeX class}

\RequirePackage[l2tabu,orthodox]{nag}
\LoadClass[a4paper,fontsize=14pt]{scrbook}

\RequirePackage{expl3}

\pagenumbering{arabic}

% Commonly used packages
\RequirePackage{geometry}
\RequirePackage{mathtools}
\RequirePackage{amsthm}
\RequirePackage{amsfonts}
\RequirePackage{amssymb}
\RequirePackage{amsmath}
\RequirePackage{xargs}
\RequirePackage{multirow}
\RequirePackage{multicol}
\RequirePackage{array}
\RequirePackage{colortbl}
\RequirePackage{longtable}
\RequirePackage{tabularx}
\RequirePackage{calc}




\RequirePackage[dvipsnames]{xcolor}
\RequirePackage[colorlinks=true, allcolors=blue]{hyperref}

\RequirePackage{minted}
\usemintedstyle{borland}
\setminted{fontsize=\small}
\setminted[cpp]{tabsize=4} 

\RequirePackage{caption} % ?

\RequirePackage[no-math]{fontspec}
\RequirePackage[lining]{ebgaramond}
\RequirePackage[cmintegrals,cmbraces]{newtxmath}
\RequirePackage{ebgaramond-maths}
\setmonofont{inconsolata}

\RequirePackage{cleveref}

\RequirePackage{indentfirst}
\setlength{\parindent}{1cm}

% Este blestemat si in mod normal si-ar lua conflict, dar pe anumite sisteme
% aparent nu se incarca regulile de silabisire fara asta...
% \RequirePackage[romanian,provide=*]{babel}

\RequirePackage{polyglossia}
\setdefaultlanguage{romanian}

\RequirePackage{ccicons}


\setcounter{MaxMatrixCols}{20}

\RequirePackage[autostyle=true, autopunct]{csquotes}

\RequirePackage{setspace}
\onehalfspacing

\newtheorem{definition}{Definiția}[section]
\newtheorem{theorem}{Teorema}[section] 

\theoremstyle{remark}
\newtheorem*{observation}{Observație}

\RequirePackage{tocdata}
\newcommand{\ChapterWithAuthor}[2]{%
  \tocdata{toc}{#2}%
  \chapter{#1}%
}
\renewcommand{\tocdataformat}[1]{%
    \normalfont\textit{\small #1}%
}

\newcommand{\cmmdc}{\textsc{cmmdc}}
\newcommand{\cmmmc}{\textsc{cmmmc}}
\renewcommand{\O}[1]{$\mathcal{O}(#1)$}
\newcommand{\cmod}{\mathbin{\%}}
\newcommand{\equals}[2]{#1 = #2}

\newcommand{\cpp}[1]{\inputminted{cpp}{#1}}

% adaugare notite - Susan 
\usepackage[colorinlistoftodos,prependcaption,textsize=small]{todonotes}
\newcommandx{\unsure}[2][1=]{\todo[linecolor=red,backgroundcolor=red!25,bordercolor=red,#1]{#2}}
\newcommandx{\change}[2][1=]{\todo[linecolor=blue,backgroundcolor=blue!25,bordercolor=blue,#1]{#2}}
\newcommandx{\info}[2][1=]{\todo[linecolor=OliveGreen,backgroundcolor=OliveGreen!25,bordercolor=OliveGreen,#1]{#2}}
\newcommandx{\improvement}[2][1=]{\todo[linecolor=Plum,backgroundcolor=Plum!25,bordercolor=Plum,#1]{#2}}



\endinput