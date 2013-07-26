/*
* 
*	 Copyright (C) 2012 Jan Brennen
* 
* Everyone is permitted to copy and distribute verbatim or modified
* copies of this license document, and changing it is allowed as long
* as the name is changed.
*
*           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
*  TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
* 
*  	0. You just DO WHAT THE FUCK YOU WANT TO.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>


static char     *faster[] = {
  "\"Let the games begin!\"",             "\"Sweet Jesus!\"",
  "\"Not that!\"",                        "\"At last!\"",
  "\"Land o' Goshen!\"",                  "\"Is that all?\"",
  "\"Cheese it, the cops!\"",             "\"I never dreamed it could be\"",
  "\"If I do, you won't respect me!\"",   "\"Now!\"",
  "\"Open sesame!\"",                     "\"EMR!\"",
  "\"Again!\"",                           "\"Faster!\"",
  "\"Harder!\"",                          "\"Help!\"",
  "\"Fuck me harder!\"",                  "\"Is it in yet?\"",
  "\"You aren't my father!\"",            "\"Doctor, that's not *my* shoulder\"",
  "\"No, no, do the goldfish!\"",         "\"Holy Batmobile, Batman!\"",
  "\"He's dead, he's dead!\"",            "\"Take me, Robert!\"",
  "\"I'm a Republican!\"",                "\"Put four fingers in!\"",
  "\"What a lover!\"",                    "\"Talk dirty, you pig!\"",
  "\"The ceiling needs painting,\"",      "\"Suck harder!\"",
  "\"The animals will hear!\"",           "\"Not in public!\"",
  "\"But Holmes!\""
};

static char     *said[] = {
        "bellowed",             "yelped",               "croaked",
        "growled",              "panted",               "moaned",
        "grunted",              "laughed",              "warbled",
        "sighed",               "ejaculated",           "choked",
        "stammered",            "wheezed",              "squealed",
        "whimpered",            "salivated",            "tongued",
        "cried",                "screamed",             "yelled",
        "said",			"gurgled",
};

static char     *the[] = {
        "the",
};

static char     *fadj[] = {
        "saucy",                "wanton",               "unfortunate",
        "lust-crazed",          "nine-year-old",        "bull-dyke",
        "bisexual",             "gorgeous",             "sweet",
        "nymphomaniacal",       "large-hipped",         "freckled",
        "forty-five year old",  "white-haired",         "large-boned",
        "saintly",              "blind",                "bearded",
        "blue-eyed",            "large tongued",        "friendly",
        "piano playing",        "ear licking",          "doe eyed",
        "sock sniffing",        "lesbian",              "hairy",
};


static char     *female[] = {
   "baggage",              "hussy",                "woman",
   "Duchess",              "female impersonator",  "nymphomaniac",
   "virgin",               "leather freak",        "home-coming queen",
   "defrocked nun",        "bisexual budgie",      "cheerleader",
   "office secretary",     "sexual deviate",       "DARPA contract monitor",
   "little matchgirl",     "ceremonial penguin",   "femme fatale",
   "bosses' daughter",     "construction worker",  "sausage abuser",
   "secretary",            "Congressman's page",   "grandmother",
   "penguin",              "German shepherd",      "stewardess",
   "waitress",             "prostitute",           "computer science group",
   "housewife",
};

static char     *asthe[] = {
        "as the", "while the"
};

static char     *madjec[] = {
   "thrashing",            "slurping",             "insatiable",
   "rabid",                "satanic",              "corpulent",
   "nose-grooming",        "tripe-fondling",       "dribbling",
   "spread-eagled",        "orally fixated",       "vile",
   "awesomely endowed",    "handsome",             "mush-brained",
   "tremendously hung",    "three-legged",         "pile-driving",
   "cross-dressing",       "gerbil buggering",     "bung-hole stuffing",
   "sphincter licking",    "hair-pie chewing",     "muff-diving",
   "clam shucking",        "egg-sucking",          "bicycle seat sniffing",
};

static char     *male[] = {
   "rakehell",             "hunchback",            "lecherous lickspittle",
   "archduke",             "midget",               "hired hand",
   "great Dane",           "stallion",             "donkey",
   "electric eel",         "paraplegic pothead",   "dirty old man",
   "faggot butler",        "friar",                "black-power advocate",
   "follicle fetishist",   "handsome priest",      "chicken flicker",
   "homosexual flamingo",  "ex-celibate",          "drug sucker",
   "ex-woman",             "construction worker",  "hair dresser",
   "dentist",              "judge",                "social worker",
};

static char     *diddled[] = {
   "diddled",              "devoured",             "fondled",
   "mouthed",              "tongued",              "lashed",
   "tweaked",              "violated",             "defiled",
   "irrigated",            "penetrated",           "ravished",
   "hammered",             "bit",                  "tongue slashed",
   "sucked",               "fucked",               "rubbed",
   "grudge fucked",        "masturbated with",     "slurped",
};

char *her[] = {
        "her", "its"
};

static char     *titadj[] = {
        "alabaster",            "pink-tipped",          "creamy",
        "rosebud",              "moist",                "throbbing",
        "juicy",                "heaving",              "straining",
        "mammoth",              "succulent",            "quivering",
        "rosey",                "globular",             "varicose",
        "jiggling",             "bloody",               "tilted",
        "dribbling",            "oozing",               "firm",
        "pendulous",            "muscular",             "bovine",
};

static char     *knockers[] = {
        "globes",               "melons",               "mounds",
        "buds",                 "paps",                 "chubbies",
        "protuberances",        "treasures",            "buns",
        "bung",                 "vestibule",            "armpits",
        "tits",                 "knockers",             "elbows",
        "eyes",                 "hooters",              "jugs",
        "lungs",                "headlights",           "disk drives",
        "bumpers",              "knees",                "fried eggs",
        "buttocks",             "charlies",             "ear lobes",
        "bazooms",              "mammaries",
};

char *and[] = {
        "and",
};

static char     *thrust[] = {
        "plunged",              "thrust",               "squeezed",
        "pounded",              "drove",                "eased",
        "slid",                 "hammered",             "squished",
        "crammed",              "slammed",              "reamed",
        "rammed",               "dipped",               "inserted",
        "plugged",              "augured",              "pushed",
        "ripped",               "forced",               "wrenched",
};

static char     *his[] = {
        "his", "its"
};

static char     *dongadj[] = {
        "bursting",             "jutting",              "glistening",
        "Brobdingnagian",       "prodigious",           "purple",
        "searing",              "swollen",              "rigid",
        "rampaging",            "warty",                "steaming",
        "gorged",               "trunklike",            "foaming",
        "spouting",             "swinish",              "prosthetic",
        "blue veined",          "engorged",             "horse like",
        "throbbing",            "humongous",            "hole splitting",
        "serpentine",           "curved",               "steel encased",
        "glass encrusted",      "knobby",               "surgically altered",
        "metal tipped",         "open sored",           "rapidly dwindling",
        "swelling",             "miniscule",            "boney",
};

static char     *dong[] = {
   "intruder",             "prong",                "stump",
   "member",               "meat loaf",            "majesty",
   "bowsprit",             "earthmover",           "jackhammer",
   "ramrod",               "cod",                  "jabber",
   "gusher",               "poker",                "engine",
   "brownie",              "joy stick",            "plunger",
   "piston",               "tool",                 "manhood",
   "lollipop",             "kidney prodder",       "candlestick",
   "John Thomas",          "arm",                  "testicles",
   "balls",                "finger",               "foot",
   "tongue",               "dick",                 "one-eyed wonder worm",
   "canyon yodeler",       "middle leg",           "neck wrapper",
   "stick shift",          "dong",                 "Linda Lovelace choker",
};

static char     *intoher[] = {
        "into her",
};

static char     *twatadj[] = {
        "pulsing",              "hungry",               "hymeneal",
        "palpitating",          "gaping",               "slavering",
        "welcoming",            "glutted",              "gobbling",
        "cobwebby",             "ravenous",             "slurping",
        "glistening",           "dripping",             "scabiferous",
        "porous",               "soft-spoken",          "pink",
        "dusty",                "tight",                "odiferous",
        "moist",                "loose",                "scarred",
        "weapon-less",          "banana stuffed",       "tire tracked",
        "mouse nibbled",        "tightly tensed",       "oft traveled",
        "grateful",             "festering",
};

static char     *twat[] = {
        "swamp.",               "honeypot.",            "jam jar.",
        "butterbox.",           "furburger.",           "cherry pie.",
        "cush.",                "slot.",                "slit.",
        "cockpit.",             "damp.",                "furrow.",
        "sanctum sanctorum.",   "bearded clam.",        "continental divide.",
        "paradise valley.",     "red river valley.",    "slot machine.",
        "quim.",                "palace.",              "ass.",
        "rose bud.",            "throat.",              "eye socket.",
        "tenderness.",          "inner ear.",           "orifice.",
        "appendix scar.",       "wound.",               "navel.",
        "mouth.",               "nose.",                "cunt.",
};

struct table {
        char    **item;
        short   len;
};

typedef struct table    TABLE;
#define C(a) {a, sizeof(a) / sizeof(char *)}
#define END {0, 0}
TABLE   list[] = {
        C(faster),     C(said),
        C(the),        C(fadj),
        C(female),     C(asthe),
        C(madjec),     C(male),
        C(diddled),    C(her),
        C(titadj),     C(knockers),
        C(and),        C(thrust),
        C(his),        C(dongadj),
        C(dong),       C(intoher),
        C(twatadj),    C(twat),
	END
};

int main(int argc, char *argv[])
{
   register TABLE  *ttp;
   register char   *cp;
   int     getpid();
   long     now;


   now = time(&now) / random();
   srandom(getpid() + (int)((now >> 16) + now + time(&now)));

   for (ttp = list;ttp->item;++ttp) {
      for (cp = ttp->len > 1 ? ttp->item[random() % ttp->len] :
           *ttp->item;*cp;++cp) {
	putc(*cp, stdout);
      }
      putc(' ', stdout);
   }
   putc('\n', stdout);
   return(0);
}
