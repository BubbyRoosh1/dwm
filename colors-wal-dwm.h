static const char norm_fg[] = "#aabfa4";
static const char norm_bg[] = "#0b1011";
static const char norm_border[] = "#768572";

static const char sel_fg[] = "#aabfa4";
static const char sel_bg[] = "#38494A";
static const char sel_border[] = "#aabfa4";


static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
