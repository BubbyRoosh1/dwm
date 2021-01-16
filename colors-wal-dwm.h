static const char norm_fg[] = "#aba49c";
static const char norm_bg[] = "#0d0c0a";
static const char norm_border[] = "#77726d";

static const char sel_fg[] = "#aba49c";
static const char sel_bg[] = "#5F491C";
static const char sel_border[] = "#aba49c";


static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
